@class NSString;
@protocol CALNURLHandler;

@interface CALNDefaultAppURLHandler : NSObject <CALNURLHandler>

@property (readonly, nonatomic) id<CALNURLHandler> fallbackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFallbackHandler:(id)a0;
- (void)openURL:(id)a0 response:(id)a1;

@end
