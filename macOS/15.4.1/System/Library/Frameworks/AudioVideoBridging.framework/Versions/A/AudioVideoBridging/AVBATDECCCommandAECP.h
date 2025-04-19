@class AVBInterface, AVB17221AECPMessage, AVBATDECCEntity;

@interface AVBATDECCCommandAECP : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBATDECCEntity *targetEntity;
@property (retain, nonatomic) AVBInterface *interface;
@property (copy, nonatomic) AVB17221AECPMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221AECPMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) BOOL ignoreStatusError;

- (void).cxx_destruct;

@end
