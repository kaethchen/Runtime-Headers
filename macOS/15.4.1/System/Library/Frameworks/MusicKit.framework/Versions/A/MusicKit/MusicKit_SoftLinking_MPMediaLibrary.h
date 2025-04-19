@class NSString, NSArray, MPMediaLibrary, NSOperationQueue;

@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMediaLibrary *deviceLibrary;
@property (class, readonly, nonatomic) NSString *libraryDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryDynamicPropertiesDidChangeNotificationName;
@property (class, readonly, nonatomic) NSArray *sharedLibraries;
@property (class, readonly, nonatomic) NSString *availableMediaLibrariesDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryConnectionProgressDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *libraryStatusDidChangeNotificationName;

@property (readonly, nonatomic) MPMediaLibrary *_underlyingMediaLibrary;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) float connectionProgress;
@property (readonly, nonatomic) BOOL isHomeSharingLibrary;


- (void).cxx_destruct;
- (id)initWithUnderlyingMediaLibrary:(id)a0;
- (id)_initWithUnderlyingMediaLibrary:(id)a0;

@end
