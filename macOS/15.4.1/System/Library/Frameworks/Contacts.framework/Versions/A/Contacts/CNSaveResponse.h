@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    BOOL _didAffectMeCard;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL didAffectMeCard;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applySnapshotsToSaveRequest:(id)a0;

@end
