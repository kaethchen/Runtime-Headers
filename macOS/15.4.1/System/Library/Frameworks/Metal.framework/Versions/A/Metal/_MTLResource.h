@interface _MTLResource : _MTLAllocation

@property (readonly) unsigned long long allocationID;
@property (readonly) long long compressionType;
@property (readonly, nonatomic) unsigned long long compressionFootprint;
@property (readonly, nonatomic) unsigned long long colorSpaceConversionMatrix;
@property (readonly, nonatomic) unsigned long long accelerationStructureUniqueIdentifier;

- (id)init;

@end
