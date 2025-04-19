@class NSString;

@interface IMMessageEffectControlChatItem : IMMessageStatusChatItem

@property (readonly, copy, nonatomic) NSString *effectStyleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 effectStyleID:(id)a1 statusItemSequenceNumber:(unsigned long long)a2;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)a0;

@end
