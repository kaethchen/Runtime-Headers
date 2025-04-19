@class NSObject, BloodhoundPacketDumper;
@protocol OS_dispatch_queue;

@interface MAUSBPacketDumper : NSObject {
    BloodhoundPacketDumper *_dumper;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

- (void).cxx_destruct;
- (void)dumpPacketData:(id)a0;
- (id)initWithFileLocation:(id)a0;

@end
