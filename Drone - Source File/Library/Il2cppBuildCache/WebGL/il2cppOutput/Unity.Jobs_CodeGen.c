#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Jobs.IJobParallelForBatch::Execute(System.Int32,System.Int32)
// 0x00000002 Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForBatchExtensions::ScheduleBatch(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
// 0x00000003 System.IntPtr Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1::Initialize()
// 0x00000004 System.Void Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1::Execute(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000005 System.Void Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction::.ctor(System.Object,System.IntPtr)
// 0x00000006 System.Void Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction::Invoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000007 System.IAsyncResult Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction::BeginInvoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.AsyncCallback,System.Object)
// 0x00000008 System.Void Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction::EndInvoke(T&,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.IAsyncResult)
// 0x00000009 System.Void Unity.Jobs.IJobParallelForDefer::Execute(System.Int32)
// 0x0000000A Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForDeferExtensions::Schedule(T,Unity.Collections.NativeList`1<U>,System.Int32,Unity.Jobs.JobHandle)
// 0x0000000B System.IntPtr Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1::Initialize()
// 0x0000000C System.Void Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1::Execute(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x0000000D System.Void Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction::.ctor(System.Object,System.IntPtr)
// 0x0000000E System.Void Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction::Invoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x0000000F System.IAsyncResult Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction::BeginInvoke(T&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.AsyncCallback,System.Object)
// 0x00000010 System.Void Unity.Jobs.IJobParallelForDeferExtensions/JobParallelForDeferProducer`1/ExecuteJobFunction::EndInvoke(T&,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.IAsyncResult)
// 0x00000011 System.Boolean Unity.Jobs.IJobParallelForFilter::Execute(System.Int32)
// 0x00000012 Unity.Jobs.JobHandle Unity.Jobs.JobParallelIndexListExtensions::ScheduleAppend(T,Unity.Collections.NativeList`1<System.Int32>,System.Int32,System.Int32,Unity.Jobs.JobHandle)
// 0x00000013 System.IntPtr Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1::Initialize()
// 0x00000014 System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1::Execute(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000015 System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1::ExecuteAppend(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,System.IntPtr)
// 0x00000016 System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1::ExecuteFilter(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,System.IntPtr)
// 0x00000017 System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/ExecuteJobFunction::.ctor(System.Object,System.IntPtr)
// 0x00000018 System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/ExecuteJobFunction::Invoke(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32)
// 0x00000019 System.IAsyncResult Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/ExecuteJobFunction::BeginInvoke(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,System.IntPtr,System.IntPtr,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.AsyncCallback,System.Object)
// 0x0000001A System.Void Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/ExecuteJobFunction::EndInvoke(Unity.Jobs.JobParallelIndexListExtensions/JobParallelForFilterProducer`1/JobWrapper<T>&,Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.IAsyncResult)
static Il2CppMethodPointer s_methodPointers[26] = 
{
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
static const int32_t s_InvokerIndices[26] = 
{
	1111,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2031,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1489,
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
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x02000004, { 3, 6 } },
	{ 0x02000008, { 13, 6 } },
	{ 0x0200000C, { 22, 9 } },
	{ 0x06000002, { 0, 3 } },
	{ 0x0600000A, { 9, 4 } },
	{ 0x06000012, { 19, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[31] = 
{
	{ (Il2CppRGCTXDataType)3, 18123 },
	{ (Il2CppRGCTXDataType)3, 7094 },
	{ (Il2CppRGCTXDataType)2, 1606 },
	{ (Il2CppRGCTXDataType)2, 1607 },
	{ (Il2CppRGCTXDataType)1, 415 },
	{ (Il2CppRGCTXDataType)3, 7095 },
	{ (Il2CppRGCTXDataType)2, 1006 },
	{ (Il2CppRGCTXDataType)3, 5100 },
	{ (Il2CppRGCTXDataType)2, 415 },
	{ (Il2CppRGCTXDataType)3, 18132 },
	{ (Il2CppRGCTXDataType)3, 7100 },
	{ (Il2CppRGCTXDataType)2, 1608 },
	{ (Il2CppRGCTXDataType)3, 17759 },
	{ (Il2CppRGCTXDataType)2, 1609 },
	{ (Il2CppRGCTXDataType)1, 416 },
	{ (Il2CppRGCTXDataType)3, 7101 },
	{ (Il2CppRGCTXDataType)2, 1007 },
	{ (Il2CppRGCTXDataType)3, 5101 },
	{ (Il2CppRGCTXDataType)2, 416 },
	{ (Il2CppRGCTXDataType)3, 18134 },
	{ (Il2CppRGCTXDataType)3, 7152 },
	{ (Il2CppRGCTXDataType)2, 1610 },
	{ (Il2CppRGCTXDataType)2, 1611 },
	{ (Il2CppRGCTXDataType)1, 1615 },
	{ (Il2CppRGCTXDataType)1, 418 },
	{ (Il2CppRGCTXDataType)3, 7153 },
	{ (Il2CppRGCTXDataType)2, 1009 },
	{ (Il2CppRGCTXDataType)3, 5103 },
	{ (Il2CppRGCTXDataType)3, 7155 },
	{ (Il2CppRGCTXDataType)3, 7154 },
	{ (Il2CppRGCTXDataType)2, 418 },
};
extern const CustomAttributesCacheGenerator g_Unity_Jobs_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Jobs_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Jobs_CodeGenModule = 
{
	"Unity.Jobs.dll",
	26,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	6,
	s_rgctxIndices,
	31,
	s_rgctxValues,
	NULL,
	g_Unity_Jobs_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
