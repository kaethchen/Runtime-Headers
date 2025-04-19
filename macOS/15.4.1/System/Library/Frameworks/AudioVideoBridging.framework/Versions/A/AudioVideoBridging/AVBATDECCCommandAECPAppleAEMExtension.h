@class AVBInterface, AVB17221AECPAppleAEMExtensionMessage, AVBATDECCEntity;

@interface AVBATDECCCommandAECPAppleAEMExtension : AVBATDECCCommandEvent

@property (retain, nonatomic) AVBATDECCEntity *targetEntity;
@property (retain, nonatomic) AVBInterface *interface;
@property (copy, nonatomic) AVB17221AECPAppleAEMExtensionMessage *commandMessage;
@property (copy, nonatomic) id /* block */ commandHandler;
@property (copy, nonatomic) AVB17221AECPAppleAEMExtensionMessage *recoveryMessage;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) BOOL ignoreStatusError;

- (void).cxx_destruct;

@end
