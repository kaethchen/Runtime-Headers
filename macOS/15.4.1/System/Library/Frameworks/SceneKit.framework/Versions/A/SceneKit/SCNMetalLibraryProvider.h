@class NSString, NSURL;
@protocol MTLLibrary;

@interface SCNMetalLibraryProvider : NSObject <SCNMetalLibraryProvider> {
    id<MTLLibrary> _library;
    NSURL *_libraryURL;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)iniWithLibrary:(id)a0;
- (unsigned long long)_libraryHash;
- (id)iniWithBlock:(id /* block */)a0;
- (id)iniWithLibraryURL:(id)a0;
- (id)libraryForDevice:(id)a0;

@end
