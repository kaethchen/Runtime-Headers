@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {
    unsigned short _notifyStatus;
    NSData *_notifyData;
}

@property (readonly, nonatomic) unsigned short notifyStatus;
@property (readonly, nonatomic) NSData *notifyData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;

@end
