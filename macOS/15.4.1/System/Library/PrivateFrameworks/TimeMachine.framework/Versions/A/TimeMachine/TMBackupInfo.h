@class NSString, NSURL, NSDate;

@interface TMBackupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSDate *dateOfPrecedingBackup;
@property (readonly) NSDate *dateCompleted;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) unsigned long long minimumFileID;
@property (readonly) unsigned long long maximumFileID;
@property (readonly) unsigned long long kind;
@property (readonly) BOOL isTombstone;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initTombstoneWithName:(id)a0 date:(id)a1 expectedBackupURL:(id)a2 kind:(unsigned long long)a3;
- (id)initWithName:(id)a0 date:(id)a1 dateOfPrecedingBackup:(id)a2 minimumFileID:(unsigned long long)a3 maximumFileID:(unsigned long long)a4 expectedBackupURL:(id)a5 kind:(unsigned long long)a6;
- (id)initWithName:(id)a0 date:(id)a1 dateOfPrecedingBackup:(id)a2 minimumFileID:(unsigned long long)a3 maximumFileID:(unsigned long long)a4 expectedBackupURL:(id)a5 kind:(unsigned long long)a6 isTombstone:(BOOL)a7;

@end
