@class NSString, MPMediaLibrary;

@interface MPMediaLibraryConnectionAssertion : NSObject {
    MPMediaLibrary *_library;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithMediaLibrary:(id)a0 identifier:(id)a1;

@end
