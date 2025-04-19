@class ICCameraFile, NSFilePromiseProvider;

@interface IKPlaceholderItem : NSObject

@property (retain, nonatomic) ICCameraFile *cameraItem;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSFilePromiseProvider *promise;
@property (nonatomic) unsigned long long objectID;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithCameraItem:(id)a0 selected:(BOOL)a1;

@end
