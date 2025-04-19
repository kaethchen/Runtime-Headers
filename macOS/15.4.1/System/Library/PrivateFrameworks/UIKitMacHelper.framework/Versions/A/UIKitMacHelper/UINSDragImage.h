@class NSData;

@interface UINSDragImage : NSObject <UINSDragImage>

@property (readonly, nonatomic) unsigned int slotID;
@property (readonly, copy, nonatomic) NSData *imageData;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0;
- (id)initWithSlotID:(unsigned int)a0;

@end
