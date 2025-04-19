@class NSString;

@interface PARSafariSearchResponse : PARResponse <PARResponse>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseFromReply:(id)a0;

- (id)initWithReply:(id)a0 factory:(id)a1 data:(id)a2;

@end
