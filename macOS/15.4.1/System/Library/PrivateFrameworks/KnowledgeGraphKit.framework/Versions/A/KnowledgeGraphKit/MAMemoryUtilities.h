@interface MAMemoryUtilities : NSObject

+ (id)humanReadableMemoryFootprint;
+ (id)humanReadableMemorySizeWithSize:(unsigned long long)a0;
+ (unsigned long long)footprintBytes;
+ (id)humanReadablePeakMemoryFootprint;
+ (id)humanReadableResidentMemory;
+ (unsigned long long)peakFootprintBytes;
+ (unsigned long long)residentBytes;

@end
