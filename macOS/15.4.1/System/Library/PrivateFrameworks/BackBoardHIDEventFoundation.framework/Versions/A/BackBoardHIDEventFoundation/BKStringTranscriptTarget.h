@class NSString, NSMutableString;

@interface BKStringTranscriptTarget : NSObject <BKTranscriptTarget> {
    NSMutableString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)build;
- (void)writeString:(id)a0;
- (void)writePrefix:(id)a0 label:(id)a1 args:(char *)a2;

@end
