@class MAUSBHostController;

@interface IOUSBHostControllerInterfaceWrapper : IOUSBHostControllerInterface {
    MAUSBHostController *_mausbController;
}

@property (readonly) MAUSBHostController *mausbController;

- (void).cxx_destruct;
- (id)initWithMAUSBHostController:(id)a0 capabilities:(id)a1 queue:(id)a2 interruptRateHz:(unsigned long long)a3 error:(id *)a4 commandHandler:(id /* block */)a5 doorbellHandler:(id /* block */)a6 interestHandler:(void /* function */ *)a7;
- (void)messageReceivedWithType:(unsigned int)a0 argument:(void *)a1;

@end
