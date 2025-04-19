@class NSError, NSObject;
@protocol OS_dispatch_group;

@interface _NSFilePromiseProviderPrivate : NSObject

@property (retain, nonatomic) NSError *provideItemErrorOrNil;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *provideItemGroup;

- (void)dealloc;

@end
