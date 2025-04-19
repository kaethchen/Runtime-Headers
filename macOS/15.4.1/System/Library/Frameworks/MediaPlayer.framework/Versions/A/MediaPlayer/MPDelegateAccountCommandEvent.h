@class NSString, NSData;

@interface MPDelegateAccountCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *delegateAccountDataType;
@property (readonly, nonatomic) NSData *delegateAccountData;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
