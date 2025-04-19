@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct ObjectStorage<WebKit::VisitedLinkStore> { struct type { unsigned char __lx[168]; } data; } _visitedLinkStore;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)removeAll;
- (void)addVisitedLinkWithString:(id)a0;
- (void)addVisitedLinkWithURL:(id)a0;
- (BOOL)containsVisitedLinkWithURL:(id)a0;
- (void)removeVisitedLinkWithURL:(id)a0;

@end
