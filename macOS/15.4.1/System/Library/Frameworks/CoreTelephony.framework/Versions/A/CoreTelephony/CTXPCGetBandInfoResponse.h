@class NSDictionary, CTBandInfo;

@interface CTXPCGetBandInfoResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSDictionary *bandMasks;
@property (readonly, nonatomic) CTBandInfo *bandInfo;

+ (id)allowedClassesForArguments;

- (id)initWithBandInfo:(id)a0;
- (id)initWithBandMasks:(id)a0;

@end
