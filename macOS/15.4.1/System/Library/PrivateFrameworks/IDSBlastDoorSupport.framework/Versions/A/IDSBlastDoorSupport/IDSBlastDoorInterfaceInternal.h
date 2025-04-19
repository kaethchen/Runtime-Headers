@interface IDSBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ bd;
}

- (id)init;
- (void).cxx_destruct;
- (void)unpackClientMessage:(id)a0 context:(id)a1 resultHandler:(id /* block */)a2;
- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;

@end
