@class MAUSBGenericPALInterface, NSNumber;

@interface MAUSBGenericPALWriteCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALInterface *interface;
@property (readonly) id /* block */ completionBlock;
@property (readonly) NSNumber *pipeRefNumber;
@property unsigned char error;

- (void).cxx_destruct;
- (id)initWithPALInterface:(id)a0 completionBlock:(id /* block */)a1 pipeRef:(id)a2;

@end
