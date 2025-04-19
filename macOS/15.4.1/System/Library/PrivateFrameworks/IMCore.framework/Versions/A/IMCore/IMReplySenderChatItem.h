@class NSString;

@interface IMReplySenderChatItem : IMSenderChatItem {
    NSString *_threadIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)threadIdentifier;
- (id)_initWithItem:(id)a0 handle:(id)a1 threadIdentifier:(id)a2;

@end
