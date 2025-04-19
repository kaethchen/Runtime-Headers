@class NSString, NSURL, NSURLSessionDataTask, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, RemoteConfigurationsControllerDelegate;

@interface RemoteConfigurationsController : NSObject {
    NSObject<OS_dispatch_source> *_downloadRemoteConfigurationTimer;
    NSURLSessionDataTask *_downloadRemoteConfigurationTask;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
}

@property (weak, nonatomic) id<RemoteConfigurationsControllerDelegate> delegate;
@property (readonly, nonatomic) NSURL *remoteConfigurationURL;
@property (readonly, nonatomic) NSURL *localConfigurationFileURL;
@property (readonly, nonatomic) double updateTimeInterval;
@property (readonly, copy, nonatomic) NSString *lastDownloadedTimePreferenceKey;

+ (void)removeDefaultsAndSignedRemoteConfigurationPlist;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_didRemoteConfigurationRequestSucceed:(id)a0;
- (void)_downloadRemoteConfiguration;
- (void)_scheduleNextDownloadAfterLastDownloadTime:(id)a0;
- (id)initWithRemoteConfigurationURL:(id)a0 localConfigurationFileURL:(id)a1 updateTimeInterval:(double)a2 lastDownloadedTimePreferenceKey:(id)a3;
- (void)loadRemoteConfigurationFromLocalFileWithCompletionHandler:(id /* block */)a0;
- (void)scheduleInitialDownload;
- (void)stopDownloadingRemoteConfiguration;

@end
