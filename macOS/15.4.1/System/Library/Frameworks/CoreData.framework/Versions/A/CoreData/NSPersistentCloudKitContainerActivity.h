@class NSUUID, NSString, NSError, NSDate;

@interface NSPersistentCloudKitContainerActivity : NSObject {
    NSUUID *_identifier;
    NSString *_storeIdentifier;
    NSError *_error;
    NSUUID *_parentActivityIdentifier;
    unsigned long long _activityType;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void)dealloc;
- (id)_initWithIdentifier:(id)a0 forStore:(id)a1 activityType:(unsigned long long)a2;
- (id)createDictionaryRepresentation;
- (void)finishWithError:(id)a0;

@end
