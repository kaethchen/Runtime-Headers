@class NSDictionary, SVXTargetLEDSupplier;

@interface SVXLEDStatusFactory : NSObject {
    NSDictionary *_statusLEDCommands;
    SVXTargetLEDSupplier *_targetLEDSupplier;
}

- (id)init;
- (void).cxx_destruct;
- (id)createClearLEDStatus;
- (id)createCommandForStatus:(id)a0;
- (id)createStatusForColor:(id)a0;

@end
