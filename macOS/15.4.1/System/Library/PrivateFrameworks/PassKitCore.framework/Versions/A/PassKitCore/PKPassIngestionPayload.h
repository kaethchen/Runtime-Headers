@class PKPassIngestionProperties, NSData, PKFileDescriptorXPCContainer, PKPass;

@interface PKPassIngestionPayload : NSObject <NSSecureCoding> {
    NSData *_data;
    PKFileDescriptorXPCContainer *_fd;
    PKPass *_pass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPassIngestionProperties *properties;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void)invalidate;
- (id)initWithFileDescriptor:(int)a0;
- (id)_initWithData:(id)a0 fileDescriptor:(id)a1 pass:(id)a2;
- (id)createPass;
- (id)initWithPass:(id)a0;

@end
