@class NSString;

@interface _WKTargetedElementRequest : NSObject <WKObject> {
    struct ObjectStorage<API::TargetedElementRequest> { struct type { unsigned char __lx[48]; } data; } _request;
    struct RetainPtr<NSString> { void *m_ptr; } _searchText;
}

@property (nonatomic) BOOL canIncludeNearbyElements;
@property (nonatomic) BOOL shouldIgnorePointerEventsNone;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSelectors:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSearchText:(id)a0;

@end
