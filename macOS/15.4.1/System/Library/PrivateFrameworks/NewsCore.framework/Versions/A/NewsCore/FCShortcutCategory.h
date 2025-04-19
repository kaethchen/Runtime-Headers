@class NSString, CKRecord, NSDate;

@interface FCShortcutCategory : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 dateAdded:(id)a2 status:(unsigned long long)a3;

@end
