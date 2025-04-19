@class NSString;

@interface WKNavigation : NSObject <WKObject> {
    struct ObjectStorage<API::Navigation> { struct type { unsigned char __lx[3808]; } data; } _navigation;
}

@property (readonly, nonatomic) long long effectiveContentMode;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (BOOL)_isUserInitiated;
- (id)_request;

@end
