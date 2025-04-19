@class NSIndexSet;

@interface ICNFIMAPClientUIDOperation : ICNFIMAPClientMailboxOperation

@property (copy) NSIndexSet *UIDs;
@property struct { unsigned long long first; unsigned long long last; } range;

+ (id)newMessageSetForIndexSet:(id)a0;
+ (id)newMessageSetForRange:(struct { unsigned long long x0; unsigned long long x1; })a0;
+ (id)newMessageSetForNumbers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
