// Template queue specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef TemplateQueue_H
#define TemplateQueue_H

template <typename T>
class TemplateQueue {
public:
    explicit TemplateQueue(int capacity=100);
    TemplateQueue(TemplateQueue<T> const & oldQueue);
    TemplateQueue<T>& operator=(TemplateQueue<T> const & oldQueue);
    bool operator==(TemplateQueue<T> const & comparisonQueue);
    ~TemplateQueue();
    int size() const;
    bool empty() const;
    const T& front() const noexcept(false);
    void enqueue (const T& e);
    void dequeue() noexcept(false);
private:
    T* array;
    int capacity;
    int numElements;
    int frontIndex;
    int rearIndex;
};


#endif
