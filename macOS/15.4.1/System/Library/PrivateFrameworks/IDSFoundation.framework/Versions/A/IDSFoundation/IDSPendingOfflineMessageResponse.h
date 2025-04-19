@class NSString;

@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

@property (copy) NSString *messageIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)command;
- (id)messageBody;

@end
