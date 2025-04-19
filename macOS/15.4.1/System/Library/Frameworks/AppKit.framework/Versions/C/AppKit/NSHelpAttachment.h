@class NSString;

@interface NSHelpAttachment : NSTextAttachment {
    NSString *markerName;
    NSString *fileName;
}

- (void)dealloc;
- (id)fileName;
- (id)initWithFileName:(id)a0 markerName:(id)a1;
- (id)markerName;

@end
