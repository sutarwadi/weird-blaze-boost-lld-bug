#include <blaze/Blaze.h>
#include <boost/container/stable_vector.hpp>
#include <vector>

template <class T, class A>
using rebind_to = typename std::allocator_traits<A>::template rebind_alloc<T>;

template <typename T, typename A>
using Storage = boost::container::stable_vector<T, rebind_to<T, A>>;

template <typename T, typename A>
using AltStorage = std::vector<T, rebind_to<T, A>>;


template <typename A>
struct LFace {
public:
  using Coord = blaze::StaticVector<double, 1>;
  std::size_t uid_{32434};
  Coord coord_;
};

int main()
{
  using A = std::allocator<void>;
  using Face = LFace<A>;
  Storage<Face, A> face_array;
  face_array.resize(34);
}
