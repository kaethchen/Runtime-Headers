@class NSString, GEOLocationShiftFunctionResponse;

@interface GEOLocationShiftingCachedResponseFetchResponse : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOLocationShiftFunctionResponse *function;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
