@class NSString;
@protocol NSCopying, NSObject;

@interface MFCacheDeleteAttachmentPurger : NSObject

@property (readonly, copy, nonatomic) id<NSCopying, NSObject> volumeIdentifier;
@property (readonly, nonatomic) int urgency;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) unsigned long long totalBytesPurged;
@property (readonly, nonatomic) unsigned long long purgeableBytesAvailable;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)_attachmentsForAccounts:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)_deleteAttachmentFile:(id)a0;
- (void)_getActiveAccounts:(id *)a0 inactiveAccounts:(id *)a1;
- (long long)_monthsToKeepRecentAttachments;
- (id)_purgeQueue;
- (id)_sharedAccountStore;
- (id)initWithVolumeIdentifier:(id)a0 urgency:(int)a1;
- (unsigned long long)purgeWithRequestedBytes:(unsigned long long)a0 outErrorMessage:(id *)a1;

@end
