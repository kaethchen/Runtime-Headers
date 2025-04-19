@class NSError, NSMutableArray, NSString;

@interface _CHCSVAggregator : NSObject <CHCSVParserDelegate>

@property (retain) NSMutableArray *lines;
@property (retain) NSError *error;
@property (retain) NSMutableArray *currentLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)parser:(id)a0 didBeginLine:(unsigned long long)a1;
- (void)parser:(id)a0 didEndLine:(unsigned long long)a1;
- (void)parser:(id)a0 didFailWithError:(id)a1;
- (void)parser:(id)a0 didReadField:(id)a1 atIndex:(long long)a2;
- (void)parserDidBeginDocument:(id)a0;

@end
