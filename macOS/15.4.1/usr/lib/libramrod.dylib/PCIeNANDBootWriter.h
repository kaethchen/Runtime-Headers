@class NSMutableData;

@interface PCIeNANDBootWriter : NSObject {
    unsigned int _service;
    struct { struct { union { struct { unsigned int version; unsigned short firmware_sectors_written; unsigned char rsvd[2]; } ; unsigned long long all; } ; } header; struct { union { struct { unsigned char num_images; unsigned char rsvd0[3]; unsigned int cycleCounter; struct { union { struct { unsigned char id; unsigned char rsvd0[3]; unsigned short chain_offset; unsigned short sectors; } ; unsigned long long all; } ; } entries[32]; } ; unsigned long long all[33]; } ; } descriptor; } _table;
    NSMutableData *_imageData;
}

@property BOOL isErase;
@property BOOL shouldCommit;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (void)appendImage:(id)a0 snapID:(int)a1;
- (id)initWithServiceNamed:(id)a0 parent:(unsigned int)a1;
- (void)resetImages;
- (int)writeFirmware:(id)a0 error:(id *)a1;

@end
