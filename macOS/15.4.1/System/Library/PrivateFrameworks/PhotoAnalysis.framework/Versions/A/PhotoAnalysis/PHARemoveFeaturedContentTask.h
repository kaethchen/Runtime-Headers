@class NSString, NSObject;
@protocol OS_os_log;

@interface PHARemoveFeaturedContentTask : NSObject <PHAPhotoLibraryTask> {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (int)priority;
- (BOOL)clearAllFeaturedStateForMemoriesAndSuggestionsWithPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
