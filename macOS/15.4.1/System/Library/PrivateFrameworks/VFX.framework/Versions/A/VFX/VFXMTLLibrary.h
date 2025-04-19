@class NSURL, VFXMTLLibraryManager;
@protocol MTLLibrary;

@interface VFXMTLLibrary : NSObject {
    NSURL *_libraryURL;
    VFXMTLLibraryManager *_manager;
}

@property (readonly, nonatomic) id<MTLLibrary> library;

- (void)dealloc;
- (void)_load;
- (id)initWithPath:(id)a0 manager:(id)a1;

@end
