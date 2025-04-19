@interface WBSPasswordImportCSVColumnIndices : NSObject

@property (readonly, nonatomic) unsigned long long urlIndex;
@property (readonly, nonatomic) unsigned long long usernameIndex;
@property (readonly, nonatomic) unsigned long long passwordIndex;
@property (readonly, nonatomic) unsigned long long otpAuthURLIndex;
@property (readonly, nonatomic) unsigned long long notesEntryIndex;
@property (readonly, nonatomic) unsigned long long titleIndex;

- (id)initWithURLIndex:(unsigned long long)a0 usernameIndex:(unsigned long long)a1 passwordIndex:(unsigned long long)a2;
- (id)initWithURLIndex:(unsigned long long)a0 usernameIndex:(unsigned long long)a1 passwordIndex:(unsigned long long)a2 sidecarDataIndices:(id)a3;

@end
