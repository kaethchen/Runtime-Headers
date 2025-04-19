@class NSString;

@interface _TtC14ReplicatorCoreP33_0666CD86C1D3D7360744851506CB0C776Client : NSObject <ReplicatorServices.ReplicationXPCServer> {
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lock_descriptors;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addRecordsWithParameters:(id)a0 error:(id *)a1;
- (id)clientDefinedRecordIDsWithParameters:(id)a0 error:(id *)a1;
- (id)clientDescriptorWithParameters:(id)a0 error:(id *)a1;
- (id)devicesAndReturnError:(id *)a0;
- (id)disableClientWithParameters:(id)a0 error:(id *)a1;
- (id)enableClientWithParameters:(id)a0 error:(id *)a1;
- (id)isClientEnabledWithParameters:(id)a0 error:(id *)a1;
- (id)localDeviceIDAndReturnError:(id *)a0;
- (id)messagesWithParameters:(id)a0 error:(id *)a1;
- (id)recordVersionsWithParameters:(id)a0 error:(id *)a1;
- (id)recordsWithParameters:(id)a0 error:(id *)a1;
- (BOOL)registerClientWithParameters:(id)a0 error:(id *)a1;
- (BOOL)removeRecordsWithParameters:(id)a0 error:(id *)a1;
- (void)sendMessageExpectingResponseWithParameters:(id)a0 completion:(id /* block */)a1;
- (BOOL)sendMessageWithParameters:(id)a0 error:(id *)a1;
- (BOOL)syncAndReturnError:(id *)a0;
- (BOOL)unregisterClientWithParameters:(id)a0 error:(id *)a1;

@end
