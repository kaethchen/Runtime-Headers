@class AVBInterface, AVB17221ACMPMessage, AVBATDECCEntity;

@interface AVBATDECCCommandACMP : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBATDECCEntity *targetEntity;
@property (retain, nonatomic) AVBInterface *interface;
@property (copy, nonatomic) AVB17221ACMPMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221ACMPMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;

- (void).cxx_destruct;

@end
