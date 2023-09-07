#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000015 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001E TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000021 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000022 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000026 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000027 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000028 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000049 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004A System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004B TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004E System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000051 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000053 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000054 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000055 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000056 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000057 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000058 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000059 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x0000005A TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005B System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000005C System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000005D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005E System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000063 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000065 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000066 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000067 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000068 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000069 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000006A System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000006B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000006C TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000070 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000071 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000072 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000073 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000074 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000075 System.Void System.Linq.Set`1::Resize()
// 0x00000076 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000077 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000078 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000079 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007B System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007E System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000007F TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000080 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000081 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000082 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000083 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000084 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000085 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000086 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000088 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000089 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008A System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008B System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008C System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008D TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008E System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x0000008F System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x00000090 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x00000091 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x00000092 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x00000093 System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x00000094 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x00000095 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x00000096 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000097 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000098 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000009E System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000A1 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000A2 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000A3 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000A4 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A5 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A8 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000AF System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B2 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B3 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B4 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[181] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[181] = 
{
	3522,
	3901,
	4079,
	4079,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2411,
	4098,
	3901,
	2434,
	2434,
	2434,
	2434,
	3901,
	-1,
	-1,
	4079,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[54] = 
{
	{ 0x02000005, { 75, 4 } },
	{ 0x02000006, { 79, 9 } },
	{ 0x02000007, { 90, 7 } },
	{ 0x02000008, { 99, 10 } },
	{ 0x02000009, { 111, 11 } },
	{ 0x0200000A, { 125, 9 } },
	{ 0x0200000B, { 137, 12 } },
	{ 0x0200000C, { 152, 1 } },
	{ 0x0200000D, { 153, 2 } },
	{ 0x0200000E, { 155, 12 } },
	{ 0x0200000F, { 167, 8 } },
	{ 0x02000010, { 175, 11 } },
	{ 0x02000011, { 186, 6 } },
	{ 0x02000013, { 192, 8 } },
	{ 0x02000015, { 200, 3 } },
	{ 0x02000016, { 205, 5 } },
	{ 0x02000017, { 210, 7 } },
	{ 0x02000018, { 217, 3 } },
	{ 0x02000019, { 220, 7 } },
	{ 0x0200001A, { 227, 4 } },
	{ 0x02000025, { 231, 3 } },
	{ 0x02000028, { 234, 21 } },
	{ 0x0200002A, { 255, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 1 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 3 } },
	{ 0x06000012, { 45, 2 } },
	{ 0x06000013, { 47, 2 } },
	{ 0x06000014, { 49, 2 } },
	{ 0x06000015, { 51, 4 } },
	{ 0x06000016, { 55, 4 } },
	{ 0x06000017, { 59, 3 } },
	{ 0x06000018, { 62, 1 } },
	{ 0x06000019, { 63, 3 } },
	{ 0x0600001A, { 66, 2 } },
	{ 0x0600001B, { 68, 2 } },
	{ 0x0600001C, { 70, 5 } },
	{ 0x0600002C, { 88, 2 } },
	{ 0x06000031, { 97, 2 } },
	{ 0x06000036, { 109, 2 } },
	{ 0x0600003C, { 122, 3 } },
	{ 0x06000041, { 134, 3 } },
	{ 0x06000046, { 149, 3 } },
	{ 0x0600007A, { 203, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[257] = 
{
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)3, 6993 },
	{ (Il2CppRGCTXDataType)2, 2921 },
	{ (Il2CppRGCTXDataType)2, 2532 },
	{ (Il2CppRGCTXDataType)3, 15068 },
	{ (Il2CppRGCTXDataType)2, 1695 },
	{ (Il2CppRGCTXDataType)2, 2539 },
	{ (Il2CppRGCTXDataType)3, 15102 },
	{ (Il2CppRGCTXDataType)2, 2534 },
	{ (Il2CppRGCTXDataType)3, 15080 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)3, 6994 },
	{ (Il2CppRGCTXDataType)2, 2951 },
	{ (Il2CppRGCTXDataType)2, 2541 },
	{ (Il2CppRGCTXDataType)3, 15114 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)2, 2549 },
	{ (Il2CppRGCTXDataType)3, 15153 },
	{ (Il2CppRGCTXDataType)2, 2545 },
	{ (Il2CppRGCTXDataType)3, 15132 },
	{ (Il2CppRGCTXDataType)2, 569 },
	{ (Il2CppRGCTXDataType)3, 29 },
	{ (Il2CppRGCTXDataType)3, 30 },
	{ (Il2CppRGCTXDataType)2, 1039 },
	{ (Il2CppRGCTXDataType)3, 5449 },
	{ (Il2CppRGCTXDataType)2, 570 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)3, 38 },
	{ (Il2CppRGCTXDataType)2, 1049 },
	{ (Il2CppRGCTXDataType)3, 5451 },
	{ (Il2CppRGCTXDataType)3, 17350 },
	{ (Il2CppRGCTXDataType)2, 579 },
	{ (Il2CppRGCTXDataType)3, 114 },
	{ (Il2CppRGCTXDataType)3, 17356 },
	{ (Il2CppRGCTXDataType)2, 583 },
	{ (Il2CppRGCTXDataType)3, 150 },
	{ (Il2CppRGCTXDataType)2, 2289 },
	{ (Il2CppRGCTXDataType)3, 12404 },
	{ (Il2CppRGCTXDataType)3, 5880 },
	{ (Il2CppRGCTXDataType)3, 17323 },
	{ (Il2CppRGCTXDataType)2, 573 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 683 },
	{ (Il2CppRGCTXDataType)3, 970 },
	{ (Il2CppRGCTXDataType)3, 971 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)3, 7656 },
	{ (Il2CppRGCTXDataType)2, 1260 },
	{ (Il2CppRGCTXDataType)3, 17301 },
	{ (Il2CppRGCTXDataType)2, 571 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)2, 1529 },
	{ (Il2CppRGCTXDataType)2, 1173 },
	{ (Il2CppRGCTXDataType)2, 1269 },
	{ (Il2CppRGCTXDataType)2, 1353 },
	{ (Il2CppRGCTXDataType)2, 1530 },
	{ (Il2CppRGCTXDataType)2, 1174 },
	{ (Il2CppRGCTXDataType)2, 1270 },
	{ (Il2CppRGCTXDataType)2, 1354 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 5450 },
	{ (Il2CppRGCTXDataType)2, 1256 },
	{ (Il2CppRGCTXDataType)2, 1257 },
	{ (Il2CppRGCTXDataType)2, 1351 },
	{ (Il2CppRGCTXDataType)3, 5448 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)2, 1268 },
	{ (Il2CppRGCTXDataType)2, 1171 },
	{ (Il2CppRGCTXDataType)3, 17316 },
	{ (Il2CppRGCTXDataType)3, 4661 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)2, 1352 },
	{ (Il2CppRGCTXDataType)2, 1419 },
	{ (Il2CppRGCTXDataType)3, 6995 },
	{ (Il2CppRGCTXDataType)3, 6997 },
	{ (Il2CppRGCTXDataType)2, 402 },
	{ (Il2CppRGCTXDataType)3, 6996 },
	{ (Il2CppRGCTXDataType)3, 7005 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 2535 },
	{ (Il2CppRGCTXDataType)3, 15081 },
	{ (Il2CppRGCTXDataType)3, 7006 },
	{ (Il2CppRGCTXDataType)2, 1319 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)3, 5458 },
	{ (Il2CppRGCTXDataType)3, 17304 },
	{ (Il2CppRGCTXDataType)2, 2546 },
	{ (Il2CppRGCTXDataType)3, 15133 },
	{ (Il2CppRGCTXDataType)3, 6998 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 2533 },
	{ (Il2CppRGCTXDataType)3, 15069 },
	{ (Il2CppRGCTXDataType)3, 5457 },
	{ (Il2CppRGCTXDataType)3, 6999 },
	{ (Il2CppRGCTXDataType)3, 17303 },
	{ (Il2CppRGCTXDataType)2, 2542 },
	{ (Il2CppRGCTXDataType)3, 15115 },
	{ (Il2CppRGCTXDataType)3, 7012 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)2, 2540 },
	{ (Il2CppRGCTXDataType)3, 15103 },
	{ (Il2CppRGCTXDataType)3, 7731 },
	{ (Il2CppRGCTXDataType)3, 3636 },
	{ (Il2CppRGCTXDataType)3, 5459 },
	{ (Il2CppRGCTXDataType)3, 3635 },
	{ (Il2CppRGCTXDataType)3, 7013 },
	{ (Il2CppRGCTXDataType)3, 17305 },
	{ (Il2CppRGCTXDataType)2, 2550 },
	{ (Il2CppRGCTXDataType)3, 15154 },
	{ (Il2CppRGCTXDataType)3, 7026 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)2, 2548 },
	{ (Il2CppRGCTXDataType)3, 15135 },
	{ (Il2CppRGCTXDataType)3, 7027 },
	{ (Il2CppRGCTXDataType)2, 1322 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)3, 5463 },
	{ (Il2CppRGCTXDataType)3, 5462 },
	{ (Il2CppRGCTXDataType)2, 2537 },
	{ (Il2CppRGCTXDataType)3, 15083 },
	{ (Il2CppRGCTXDataType)3, 17310 },
	{ (Il2CppRGCTXDataType)2, 2547 },
	{ (Il2CppRGCTXDataType)3, 15134 },
	{ (Il2CppRGCTXDataType)3, 7019 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)2, 2544 },
	{ (Il2CppRGCTXDataType)3, 15117 },
	{ (Il2CppRGCTXDataType)3, 5461 },
	{ (Il2CppRGCTXDataType)3, 5460 },
	{ (Il2CppRGCTXDataType)3, 7020 },
	{ (Il2CppRGCTXDataType)2, 2536 },
	{ (Il2CppRGCTXDataType)3, 15082 },
	{ (Il2CppRGCTXDataType)3, 17309 },
	{ (Il2CppRGCTXDataType)2, 2543 },
	{ (Il2CppRGCTXDataType)3, 15116 },
	{ (Il2CppRGCTXDataType)3, 7033 },
	{ (Il2CppRGCTXDataType)2, 1603 },
	{ (Il2CppRGCTXDataType)2, 2552 },
	{ (Il2CppRGCTXDataType)3, 15156 },
	{ (Il2CppRGCTXDataType)3, 7732 },
	{ (Il2CppRGCTXDataType)3, 3638 },
	{ (Il2CppRGCTXDataType)3, 5465 },
	{ (Il2CppRGCTXDataType)3, 5464 },
	{ (Il2CppRGCTXDataType)3, 3637 },
	{ (Il2CppRGCTXDataType)3, 7034 },
	{ (Il2CppRGCTXDataType)2, 2538 },
	{ (Il2CppRGCTXDataType)3, 15084 },
	{ (Il2CppRGCTXDataType)3, 17311 },
	{ (Il2CppRGCTXDataType)2, 2551 },
	{ (Il2CppRGCTXDataType)3, 15155 },
	{ (Il2CppRGCTXDataType)3, 5454 },
	{ (Il2CppRGCTXDataType)3, 5455 },
	{ (Il2CppRGCTXDataType)3, 5466 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)3, 116 },
	{ (Il2CppRGCTXDataType)2, 1311 },
	{ (Il2CppRGCTXDataType)2, 1377 },
	{ (Il2CppRGCTXDataType)3, 5456 },
	{ (Il2CppRGCTXDataType)2, 1329 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 119 },
	{ (Il2CppRGCTXDataType)2, 526 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)3, 115 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)3, 152 },
	{ (Il2CppRGCTXDataType)2, 1314 },
	{ (Il2CppRGCTXDataType)2, 1379 },
	{ (Il2CppRGCTXDataType)3, 154 },
	{ (Il2CppRGCTXDataType)2, 400 },
	{ (Il2CppRGCTXDataType)2, 584 },
	{ (Il2CppRGCTXDataType)3, 151 },
	{ (Il2CppRGCTXDataType)3, 153 },
	{ (Il2CppRGCTXDataType)3, 59 },
	{ (Il2CppRGCTXDataType)2, 2384 },
	{ (Il2CppRGCTXDataType)3, 14273 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)3, 14274 },
	{ (Il2CppRGCTXDataType)3, 61 },
	{ (Il2CppRGCTXDataType)2, 397 },
	{ (Il2CppRGCTXDataType)2, 574 },
	{ (Il2CppRGCTXDataType)3, 58 },
	{ (Il2CppRGCTXDataType)3, 60 },
	{ (Il2CppRGCTXDataType)3, 45 },
	{ (Il2CppRGCTXDataType)2, 395 },
	{ (Il2CppRGCTXDataType)3, 47 },
	{ (Il2CppRGCTXDataType)2, 572 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)3, 46 },
	{ (Il2CppRGCTXDataType)3, 4694 },
	{ (Il2CppRGCTXDataType)2, 959 },
	{ (Il2CppRGCTXDataType)2, 3021 },
	{ (Il2CppRGCTXDataType)3, 14270 },
	{ (Il2CppRGCTXDataType)3, 14271 },
	{ (Il2CppRGCTXDataType)2, 1433 },
	{ (Il2CppRGCTXDataType)3, 14272 },
	{ (Il2CppRGCTXDataType)2, 344 },
	{ (Il2CppRGCTXDataType)2, 577 },
	{ (Il2CppRGCTXDataType)3, 94 },
	{ (Il2CppRGCTXDataType)3, 12388 },
	{ (Il2CppRGCTXDataType)2, 2290 },
	{ (Il2CppRGCTXDataType)3, 12405 },
	{ (Il2CppRGCTXDataType)2, 684 },
	{ (Il2CppRGCTXDataType)3, 972 },
	{ (Il2CppRGCTXDataType)3, 12394 },
	{ (Il2CppRGCTXDataType)3, 3604 },
	{ (Il2CppRGCTXDataType)2, 428 },
	{ (Il2CppRGCTXDataType)3, 12389 },
	{ (Il2CppRGCTXDataType)2, 2286 },
	{ (Il2CppRGCTXDataType)3, 1004 },
	{ (Il2CppRGCTXDataType)2, 699 },
	{ (Il2CppRGCTXDataType)2, 924 },
	{ (Il2CppRGCTXDataType)3, 3613 },
	{ (Il2CppRGCTXDataType)3, 12390 },
	{ (Il2CppRGCTXDataType)3, 3599 },
	{ (Il2CppRGCTXDataType)3, 3600 },
	{ (Il2CppRGCTXDataType)3, 3598 },
	{ (Il2CppRGCTXDataType)3, 3601 },
	{ (Il2CppRGCTXDataType)2, 920 },
	{ (Il2CppRGCTXDataType)2, 2997 },
	{ (Il2CppRGCTXDataType)3, 5453 },
	{ (Il2CppRGCTXDataType)3, 3603 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)3, 3602 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)2, 2954 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)2, 1356 },
	{ (Il2CppRGCTXDataType)3, 979 },
	{ (Il2CppRGCTXDataType)2, 686 },
	{ (Il2CppRGCTXDataType)2, 3003 },
	{ (Il2CppRGCTXDataType)3, 4677 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)3, 5762 },
	{ (Il2CppRGCTXDataType)3, 5763 },
	{ (Il2CppRGCTXDataType)3, 5768 },
	{ (Il2CppRGCTXDataType)2, 1428 },
	{ (Il2CppRGCTXDataType)3, 5765 },
	{ (Il2CppRGCTXDataType)3, 17866 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)3, 3626 },
	{ (Il2CppRGCTXDataType)1, 1235 },
	{ (Il2CppRGCTXDataType)2, 2964 },
	{ (Il2CppRGCTXDataType)3, 5764 },
	{ (Il2CppRGCTXDataType)1, 2964 },
	{ (Il2CppRGCTXDataType)1, 1428 },
	{ (Il2CppRGCTXDataType)2, 3019 },
	{ (Il2CppRGCTXDataType)2, 2964 },
	{ (Il2CppRGCTXDataType)3, 5769 },
	{ (Il2CppRGCTXDataType)3, 5767 },
	{ (Il2CppRGCTXDataType)3, 5766 },
	{ (Il2CppRGCTXDataType)2, 288 },
	{ (Il2CppRGCTXDataType)3, 3639 },
	{ (Il2CppRGCTXDataType)2, 411 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	181,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	54,
	s_rgctxIndices,
	257,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
