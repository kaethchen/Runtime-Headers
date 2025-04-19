@class NSString, NSObject;
@protocol OS_os_log;

@interface BKOSLogTranscriptTarget : NSObject <BKTranscriptTarget> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
