@interface SummarizationKit.TelemetrySignalCollector : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _startTimestamp;
    void /* unknown type, empty encoding */ _inputLength;
    void /* unknown type, empty encoding */ _maxTokenLength;
    void /* unknown type, empty encoding */ _overestimatedInputTokensCount;
    void /* unknown type, empty encoding */ _overestimatedTruncatedInputTokensCount;
    void /* unknown type, empty encoding */ _inputHasUnsupportedEmoji;
    void /* unknown type, empty encoding */ _inputHasURL;
    void /* unknown type, empty encoding */ _inputHasTapback;
    void /* unknown type, empty encoding */ _titleLength;
    void /* unknown type, empty encoding */ _textualContextLength;
    void /* unknown type, empty encoding */ _subtitleLength;
    void /* unknown type, empty encoding */ _bodyLength;
    void /* unknown type, empty encoding */ _subjectLength;
    void /* unknown type, empty encoding */ _senderLength;
    void /* unknown type, empty encoding */ _recipientsLength;
    void /* unknown type, empty encoding */ _participantsLength;
    void /* unknown type, empty encoding */ _attachmentLength;
    void /* unknown type, empty encoding */ _styles;
    void /* unknown type, empty encoding */ _outputLength;
    void /* unknown type, empty encoding */ _isInputTruncated;
    void /* unknown type, empty encoding */ _isInputSanitized;
    void /* unknown type, empty encoding */ _isOutputSanitized;
    void /* unknown type, empty encoding */ _isOutputFactuallyConsistent;
    void /* unknown type, empty encoding */ _latencyPreprocessing;
    void /* unknown type, empty encoding */ _latencyInputSanitization;
    void /* unknown type, empty encoding */ _latencyInference;
    void /* unknown type, empty encoding */ _latencyPostprocessing;
    void /* unknown type, empty encoding */ _latencyFactualConsistencyClassification;
    void /* unknown type, empty encoding */ _inputChunkCount;
    void /* unknown type, empty encoding */ _retryCount;
    void /* unknown type, empty encoding */ _gmsCallCount;
    void /* unknown type, empty encoding */ _isLLMClassifierTriggered;
    void /* unknown type, empty encoding */ _languageDetected;
    void /* unknown type, empty encoding */ _responseUrgency;
    void /* unknown type, empty encoding */ _responseUrgencyFastClassifier;
    void /* unknown type, empty encoding */ _responseUrgencyLLMClassifier;
    void /* unknown type, empty encoding */ _confidenceBucket;
    void /* unknown type, empty encoding */ _latencyEmbeddingExtraction;
    void /* unknown type, empty encoding */ _latencyFastClassifier;
    void /* unknown type, empty encoding */ _latencyLLMClassifier;
    void /* unknown type, empty encoding */ storage;
}

@end
