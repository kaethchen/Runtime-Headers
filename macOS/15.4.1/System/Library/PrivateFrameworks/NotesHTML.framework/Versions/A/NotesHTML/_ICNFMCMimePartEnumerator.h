@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator

@property (readonly, nonatomic) BOOL onlyAttachments;
@property (nonatomic) BOOL isFirstIteration;
@property (retain, nonatomic) ICNFMCMimePart *currentPart;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMimeBody:(id)a0 onlyAttachments:(BOOL)a1;

@end
