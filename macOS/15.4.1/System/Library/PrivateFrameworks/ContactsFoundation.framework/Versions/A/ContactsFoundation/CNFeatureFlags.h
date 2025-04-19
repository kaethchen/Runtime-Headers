@class NSString;
@protocol CNFeatureFlags;

@interface CNFeatureFlags : NSObject <CNFeatureFlags>

@property (class, readonly) id<CNFeatureFlags> currentFlags;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFeatureEnabled:(unsigned long long)a0;

@end
