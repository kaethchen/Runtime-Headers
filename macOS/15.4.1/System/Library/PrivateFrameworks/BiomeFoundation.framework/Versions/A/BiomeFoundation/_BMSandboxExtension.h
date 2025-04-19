@class NSString, BMAccessDescriptor, BMResourceContainer;

@interface _BMSandboxExtension : NSObject {
    long long _handle;
}

@property (readonly, nonatomic) BMAccessDescriptor *descriptor;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BMResourceContainer *container;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;

@end
