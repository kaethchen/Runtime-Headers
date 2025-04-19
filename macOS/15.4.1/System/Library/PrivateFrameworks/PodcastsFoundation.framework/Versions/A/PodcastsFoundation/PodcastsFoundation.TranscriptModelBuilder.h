@interface PodcastsFoundation.TranscriptModelBuilder : NSObject <PFTTMLParserDelegate> {
    void /* unknown type, empty encoding */ currentParagraph;
    void /* unknown type, empty encoding */ parsedParagraphs;
    void /* unknown type, empty encoding */ currentSentence;
    void /* unknown type, empty encoding */ numberOfOpenSpansSinceStartOfSentence;
    void /* unknown type, empty encoding */ currentWord;
    void /* unknown type, empty encoding */ numberOfOpenSpansSinceStartOfWord;
    void /* unknown type, empty encoding */ speakers;
    void /* unknown type, empty encoding */ currentSpeakerID;
    void /* unknown type, empty encoding */ isParsingSpeakerName;
    void /* unknown type, empty encoding */ isParsingDescriptor;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ lockedPhase;
    void /* unknown type, empty encoding */ interval;
}

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (void)parser:(id)a0 didEndElementType:(long long)a1;
- (void)parser:(id)a0 didStartElementType:(long long)a1;

@end
