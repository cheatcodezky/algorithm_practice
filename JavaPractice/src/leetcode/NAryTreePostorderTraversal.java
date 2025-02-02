package leetcode;

import java.util.ArrayList;
import java.util.List;

public class NAryTreePostorderTraversal {
    class Node {
        public int val;
        public List<Node> children;
        public Node() {}

        public Node(int _val, List<Node> _children) {
            val = _val;
            children = _children;
        }
    };

    class Solution {
        public List<Integer> postorder(Node root) {
            List<Integer> result = new ArrayList<>();
            if(root == null)
                return result;
            for(Node node:root.children){
                List<Integer> list = postorder(node);
                result.addAll(list);
            }
            result.add(root.val);
            return result;
        }
    }
}
